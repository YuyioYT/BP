function onCreate()
	makeLuaSprite('obj1','BackgroundBP/Expunged/Cataclysmic', -900, -500)
	addLuaSprite('obj1',false)
	--scaleObject('obj1',1.2,1.2)
	setScrollFactor('obj1', 0.1, 0.1)
	setAntialiasing('obj1',false)
	addGlitchEffect('obj1',2,5,0.1)
end
