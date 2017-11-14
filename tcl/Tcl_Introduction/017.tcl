;#------------------------------------------------------------------------------
;#
;#
;#------------------------------------------------------------------------------
set list1 [list a b c]
set bpos [lsearch $list1 b]

puts $list1
puts $bpos

puts "b position: $bpos"

set list [list {Washington 1789} {Adams 1797} {Jefferson 1801}\
				{Madison 1809} {Monroe 1817} {Adams 1825}]

set x [lsearch $list Washington*];puts $x
set y [lsearch $list Monroe*];puts $y
set y [lsearch $list M*];puts $y

incr x;  incr y -1

set subsetlist [lrange $list $x $y]

foreach item $subsetlist {
	puts "Starting in [lindex $item 1]: President [lindex $item 0]"
}

set x [lsearch $list Madison*]
set strlist [lsort $list]
set y [lsearch $strlist Madison*]


puts "\n$x Presidents came before Madison chronologically"
puts "$y Presidents came before Madison alphabetically"