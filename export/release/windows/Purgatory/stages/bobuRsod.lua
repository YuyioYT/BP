function onCreate()
	makeLuaSprite('obj1','BackgroundBP/bombu/rsod/KERNEL_DATA_INPAGE_ERROR',-1000,-430)
	addLuaSprite('obj1',false)
	setScrollFactor('obj1', 0.1, 0.1)
	scaleObject('obj1',1.5,1.5)
	addGlitchEffect('obj1',2,5,0.1)
end