!写入数组
program p
	parameter (n=3)
dimension name(n)
character name *10
write(name(1),"(a7)") "record "
write(name(2),"(a7)") 'record '
write(name(3),"(a7)") 'record '
print '(a7)',name
read*
end program p
!record
!record
!record



program p
    implicit none
open(10,file="stu4.md",form="formatted",access="direct",recl=15)
write(10,"(a7,f4.1)",rec=1) "record ",11.0
write(10,"(a7,f4.1)",rec=2) 'record ',77.5
write(10,"(a7,f4.1)",rec=3) 'record ',31.5
close(10)   
end program p
!record 11.0    record 77.5    record 31.5    


program p
    implicit none
open(10,file="stu4.md",form="formatted",access="direct",recl=10)
write(10,"(a7,i2)",rec=1) "record ",11
write(10,"(a7,i2)",rec=2) 'record ',77
write(10,"(a7,i2)",rec=3) 'record ',31
close(10)   
end program p
!record 11 record 77 record 31 


program p
    implicit none
open(10,file="stu4.md",form="formatted",access="direct",recl=10)
write(10,"(a8)",rec=1) "record 1"
write(10,"(a7,i1)",rec=2) 'record ',3
close(10)   
end program p
!record 1  record 3  record 3 


parameter (n=3)
dimension name(n),s(n)
character name *10
open(1,file="stu4.md",form="formatted",access="direct",recl=10)
do i=1,n
    read(1,20,rec=i) name(i),s(i)
enddo
20 format(a7,i2)
close(1)

open(2,file="stu5.md",form="formatted",access="direct",recl=10)
do i=1,n
    if(s(i) >= 60) write(2,20,rec=i) name(i), s(i)
enddo
close(2)
end







parameter (n=3)
dimension name(n),s(n)
character name *10
open(1,file="stu3.md",form="formatted",access="direct",recl=11)
do i=1,n
    read(1,20,rec=i) name(i),s(i)
enddo
20 format(a6,f5.1)
close(1)

open(2,file="stu4.md",form="formatted",access="direct",recl=11)
do i=1,n
    if(s(i) >= 60) write(2,20,rec=i) name(i), s(i)
enddo
close(2)
end


