--[ local variable definition --]
a = 10

--[ while loop execution --]
while( a < 20 )
do
   print("value of a:", a)
   a=a+1
	
   if( a > 15)
   then
      --[ terminate the loop using break statement --]
      break
   end
	
end