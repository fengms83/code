
proc traverse {alist} {
	puts $alist
	set i 0
	
	foreach j $alist {
		puts "alist\[$i\] = $j"
		incr i
	}
	
	puts "-----------------------------"
}

set a [concat a b {c d e} {f {g h}}]
traverse $a

lappend a {ij K lm}
traverse $a

lappend a ij K lm
traverse $a

;# 插入一项
set b [linsert $a 3 "1 2 3"]
traverse $b

;# 插入三项
set b [linsert $a 3 1 2 3]
traverse $b

;# 第三项（包含）开始，第五项（不包含）结束
set b [lreplace $a 3 5 "AA" "BB"]
traverse $b