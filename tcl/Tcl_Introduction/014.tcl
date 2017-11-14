;#------------------------------------------------------------------------------
;# 2．局部变量：upvar x y 等同于upvar 1 x y，
;#      作用有两个：一是将上一层的x的值赋给y；
;#                二是将上一层的x的地址赋给y，
;#      于是修改y等于修改x。
;#
;#    1代表作用范围，向上一层寻找；也可为2，3等，向上二层、三层寻找；不能为0
;#
;#
;#------------------------------------------------------------------------------

proc SetPositive { var value } {
	upvar $var myvar
	if { $value < 0 } {
		set myvar [expr -$value]
	} else {
		set myvar $value
	}
	
	return $myvar
}

SetPositive x 5
SetPositive y -10

puts "X:$x, Y:$y\n"

proc two { y } {
	upvar 1 $y z
	upvar 2 x a 
	puts "\[two\] Z:$z A:$a"
	
	set z 1			;# 此处对z的操作，直接作用于y
	set a 2			;# 此处对a的操作，直接作用于x
}

proc one { y } {
	upvar $y z
	puts "\[one\] Z:$z"
	two z
} 

one y

puts "X:$x  Y:$y"