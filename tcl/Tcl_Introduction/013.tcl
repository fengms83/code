;#------------------------------------------------------------------------------
;#
;#
;#------------------------------------------------------------------------------
proc example { first {second ""} {third ""} args} {
	puts "first = $first"
	puts "second = $second"
	puts "third = $third"
	puts "args = $args"
}


example ONE
example ONE TWO
example ONE TWO THREE
example ONE TWO THREE FOUR
