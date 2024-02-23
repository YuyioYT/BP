function onCreate()
--script create by yuyio

 	makeLuaSprite('obj1', 'BackgroundBP/farmsunset/sky_evening', -500, -300)
	setObjectOrder('obj1', 0)
	scaleObject('obj1',1.2,1.2)
    	setScrollFactor('obj1',0,0)
	addLuaSprite('obj1', true)
	
	makeLuaSprite('obj2', 'BackgroundBP/farmsunset/hills', -450, -1000)
	setObjectOrder('obj2', 1)
	scaleObject('obj2',0.65,0.65)
	setScrollFactor('obj2',0, 0)
	addLuaSprite('obj2', true)
	
	makeLuaSprite('obj3', 'BackgroundBP/farmsunset/farm', -550, -200)
	setObjectOrder('obj3', 2)
	scaleObject('obj3',0.65,0.65)
	setScrollFactor('obj3', 0.5, 0.5)
	addLuaSprite('obj3', true)
	
	makeLuaSprite('obj4', 'BackgroundBP/farmsunset/foreground', -1000, 0)
	setObjectOrder('obj4', 3)
	scaleObject('obj4',0.9,0.9)
	setScrollFactor('obj4', 1, 1)
	addLuaSprite('obj4', true)

	setProperty('obj3.color', getColorFromHex('fd8eb0'))
	setProperty('obj4.color', getColorFromHex('fd8eb0'))
	setProperty('obj2.color', getColorFromHex('fd8eb0'))
	setProperty('obj1.color', getColorFromHex('fd8eb0'))
end
