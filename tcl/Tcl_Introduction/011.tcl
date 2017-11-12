;#------------------------------------------------------------------------------
;#	2.自加自减速运算用incr命令完成
;#    incr varName ?step?  没有后一个参数表示加1，incr a -n表示减n。
;#------------------------------------------------------------------------------

;# 自加
for {puts "start"; set i 0} {$i < 2} {incr i; puts "I after incr: $i"} {
	puts "I inside first loop: $i"
}

;# 自减
for {puts "start"; set i 3} {$i > 0} {incr i -1; puts "I after incr: $i"} {
	puts "I inside first loop: $i"
}