set x "ONE"
set y 1
set z "ONE"

switch $x\
	"ONE"		"puts ONE=1"\
	"TWO"		"puts TWO=2"\
	"default"	"puts NO_MATCH"
	
switch $x\
	$z			"puts ONE=1"\
	"TWO"		"puts TWO=2"\
	"default"	"puts NO_MATCH"
	
switch $x\
	"$z"		"puts ONE=1"\
	"TWO"		"puts TWO=2"\
	"default"	"puts NO_MATCH"

;#------------------------------------------------------------------------------	
;# 下面这种写法$z被置换,走入$z的条件分支,
;# 表面上看条件分支中的命令在花括号内,这只是switch的一种格式,
;# 所以其中的命令仍然被执行了。
;#------------------------------------------------------------------------------
switch $x\
	"$z"		{set y1 [expr $y+1];puts "MATCH \$z. $y+$z is $y1"}\
	"ONE"		{set y1 [expr $y+1];puts "MATCH ONE. $y+1 is $y1"}\
	"TWO"		{set y1 [expr $y+2];puts "MATCH TWO. $y+2 is $y1"}\
	"THREE"		{set y1 [expr $y+3];puts "MATCH THREE. $y+3 is $y1"}\
	"default"	{"puts $x is NOT AMATCH"}

;#------------------------------------------------------------------------------
;# 下面为了不置换$z,在外层加上了花括号,于是走入了ONE分支,而分支中的命令仍然被执行了
;#
;# 【注意】$x与{之间，要加一个空格，否则报错如下：
;#		wrong # args: should be "switch ?-option ...? string ?pattern body ...? ?default
;#		 body?"
;#			while executing
;#		"switch $x{"
;#			(file "008.tcl" line 31)
;#------------------------------------------------------------------------------
switch $x {
	"$z"		{set y1 [expr $y+1];puts "MATCH \$z. $y+$z is $y1"}
	"ONE"		{set y1 [expr $y+1];puts "MATCH ONE. $y+1 is $y1"}
	"TWO"		{set y1 [expr $y+2];puts "MATCH TWO. $y+2 is $y1"}
	"THREE"		{set y1 [expr $y+3];puts "MATCH THREE. $y+3 is $y1"}
	"default"	{"puts $x is NOT AMATCH"}
}