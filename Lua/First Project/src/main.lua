--[[NOTE: Similar to C++ cannot call functions that are written after their references]]

--Theses are single space comments
--[[These are...
	multiple line comments.]]

--A function can be global or local; however global functions cannot call local ones :P
local function main()
	print(getName())
end
--You must always use the "end" keyword to end a function (and remember that "function" is synonymous with "method")

function getName()
	return "Jabari"
end

main()

--[[The wikipedia page for Lua has helpful example for other things if you forget]]