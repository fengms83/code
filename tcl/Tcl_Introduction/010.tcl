set x 1
while { $x < 5 } {
	puts "x is $x"; 
	set x [expr $x + 1]
}

set x 0
while "$x < 5" {
	set x [expr $x + 1]
	if { $x > 6 } break
	if { $x > 3 } continue
	
	puts "x is $x"
}