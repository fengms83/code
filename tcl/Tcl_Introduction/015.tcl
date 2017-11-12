;#------------------------------------------------------------------------------
;# 1．字符串可以使用 ：split 字符串 分隔符 拆分得到一个list，缺省分隔符是空格
;# 2．list可以直接定义：set z [list a b]
;# 3．foreach x $list ：用以列出list中的所有项
;# 4．llength $list ：用以列出list中的项数
;#------------------------------------------------------------------------------
set x "a b c"
puts $x
puts "Item2 of the list {$x} is :[lindex $x 2]\n"

set x [list 1 2 3 4 5]
puts $x

set y [split 7/4/1776 "/"]
puts $y
puts [lindex $y 2]

set i 0
foreach j $x {
	puts "$j is item number $i in list x"
	incr i
}