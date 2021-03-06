set fullpath "/usr/home/clif/TCL_STUFF/TclTutor/Lsn.17"
set relativepath "CVS/Entries"
set directorypath "/usr/bin/"

set paths [list $fullpath $relativepath $directorypath]

foreach path $paths {
	set first [string first "/" $path]
	set last  [string last  "/" $path]
	
	if { $first != 0 } {
		puts "$path is a relative path"
	} else {
		puts "$path is an absolute path"
	}
	
	incr last
	
	if { $last != [string length $path] } {
		set name [string range $path $last end]
		puts "The file refernced in $path is $name"
	} else {
		incr last -2
		set tmp [string range $path 0 $last]
		set last [string last "/" $tmp]
		
		incr last
		set name [string range $tmp $last end]
		puts "The final directory in $path is $name"
	}
	
	if { [string match "*CVS*" $path ]} {
		puts "$path is part of the source code control tree "
	}
	
	;#--------------------------------------------------------------------------
	;#
	;#
	;#--------------------------------------------------------------------------
	set word "1 12 123"
	puts "wordstart: [string wordstart $word 0]"
	puts "wordend:   [string wordend   $word 0]"
	
	puts "wordstart: [string wordstart $word 1]"
	puts "wordend:   [string wordend   $word 1]"
	
	puts "wordstart: [string wordstart $word 2]"
	puts "wordend:   [string wordend   $word 2]"
}