s = 1.0
do k=2, 10, 4
	s = s + 1/k
		do n=-1, -3
			s = 2 * s
            print *, "hello"
		enddo
enddo
print *, s
    read *
end