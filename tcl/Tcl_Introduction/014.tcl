;#------------------------------------------------------------------------------
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
	
	set z 1
	set a 2
}

proc one { y } {
	upvar $y z
	puts "\[one\] Z:$z"
	two z
} 

one y

puts "X:$x  Y:$y"