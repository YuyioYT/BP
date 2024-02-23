--created with Super_Hugo's Stage Editor v1.6.3

function onCreate()

	makeLuaSprite('obj1', 'skynight', -453, -1138)
	setObjectOrder('obj1', 0)
	scaleObject('obj1', 0.6, 0.6)
	addLuaSprite('obj1', true)
	
	makeLuaSprite('obj2', 'hills', -453, -1145)
	setObjectOrder('obj2', 1)
	scaleObject('obj2', 0.6, 0.6)
	addLuaSprite('obj2', true)
	
	makeLuaSprite('obj3', 'farm', -456, -1133)
	setObjectOrder('obj3', 2)
	scaleObject('obj3', 0.6, 0.6)
	addLuaSprite('obj3', true)
	
	makeLuaSprite('obj4', 'foreground', -453, -1141)
	setObjectOrder('obj4', 3)
	scaleObject('obj4', 0.6, 0.6)
	addLuaSprite('obj4', true)
	
end