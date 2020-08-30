#Commentário... Não tenho certeza

def ehprimo( num )
    
    i = 1
    counter = 0

	while i <= num
       if num % i == 0
          counter = counter + 1
       end
	end

	if counter == 2
		return 1
	else
		return 0		
	end
	
end

i = 0
while i < 100 do
	
	if ehprimo(i) == 1
		print "#{i} - "
	end

   i+=1	
end
