!公用区，多出来的默认为0
dimension x(5)
common a,b,x
a = -2.3
b = 2.6
do i=1,5
	x(i) = a*i
enddo
call sub
read*
end

subroutine sub
	common r,y,t(6), a
	print*, r,y ,t , a
end