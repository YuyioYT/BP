function onCreate()
--Script Create by yuyio YT
 	makeLuaSprite('obj1', 'BackgroundBP/farmnight/skynight', -800, -450)
	setObjectOrder('obj1', 0)
	scaleObject('obj1',0.6,0.6)
    	setScrollFactor('obj1',0,0)
	addLuaSprite('obj1', true)
	
	makeLuaSprite('obj2', 'BackgroundBP/farmnight/hills', -600, -1000)
	setObjectOrder('obj2', 1)
	scaleObject('obj2',0.65,0.65)
	setScrollFactor('obj2',0.1, 0.1)
	addLuaSprite('obj2', true)
	
	makeLuaSprite('obj3', 'BackgroundBP/farmnight/farm', -550, -900)
	setObjectOrder('obj3', 2)
	scaleObject('obj3',0.65,0.65)
	setScrollFactor('obj3', 0.5, 0.5)
	addLuaSprite('obj3', true)
	
	makeLuaSprite('obj4', 'BackgroundBP/farmnight/foreground', -900, -1300)
	setObjectOrder('obj4', 3)
	scaleObject('obj4',0.8,0.8)
	setScrollFactor('obj4', 1, 1)
	addLuaSprite('obj4', true)

end

function onCreatePost()
    addBloomEffect2('obj1')
    addBloomEffect2('camhud',0.1,0.1)
end