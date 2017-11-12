;#------------------------------------------------------------------------------
;#
;#
;#------------------------------------------------------------------------------
proc sum {arg1 arg2} {
	set x [expr $arg1 + $arg2]
	return $x
}

puts "The sum of 2 and 3 is: [sum 2 3]."

sum 2 3
sum {2} {3}
sum "2" "3"

set y [sum 2 3]
puts $y

set y [sum {2} {3}]
puts $y

set y [sum "2" "3"]
puts $y