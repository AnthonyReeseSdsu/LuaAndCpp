

function InfixToPostfix(str)

print("Assignment #3-2, Anthony Reese, areese@sdsu.edu"); 

precedent = {} 
operator= {}
operand = {} 
precedent["+"] = 1
precedent["-"] = 1
precedent["*"] = 2
precedent["/"] = 2
index = 1
postfixStr = ""

    for token in string.gmatch(str,"%S+")
        do 
           operand[index] = token
           index = index +1
      end

   

    for i = 1, #operand
        do
          if tonumber(operand[i]) ~= nil 
               then
                   postfixStr = postfixStr .. operand[i] .. " " 
           
     else
              while(( next(operator) ~= nil) and

              (precedent[tostring(operator[#operator])] >= precedent[tostring((operand[i]))]))

                    do

                      postfixStr = postfixStr .. operator[#operator] .. " "

                      table.remove(operator)

                    end

           table.insert(operator,(operand[i]))

         end

    end

              while (next(operator) ~= nil)   

                do

                  postfixStr = postfixStr .. operator[#operator]

                  table.remove(operator)

                  end

  return postfixStr

end

