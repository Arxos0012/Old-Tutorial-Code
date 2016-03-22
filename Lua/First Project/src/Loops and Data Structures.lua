a = "apples"
b = "bark"
c = {aa = "cat", bb = "cookie", cc = "cycle"}

--This is a table. Lua it is like an array

while a == "apples" do
	print("Apples print in the while loop.")
	a = "This stops the loop"
end
--[[---------------------------------------]]

repeat
	print("Bark prints in the repeat loop.")
	b = "bagel"
until b == "bagel"
--[[---------------------------------------]]