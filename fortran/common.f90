common a,b,c,d
a = 1.0
b = 2.0
c = 3.0
d = 4.0
call abcd(2)
print *, a,b,c,d     
read *
end

subroutine abcd(n)
common b, c, d, a
if(n.gt.0) then
	b =a
	c = d
endif

    
end subroutine 