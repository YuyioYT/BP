function onCreate()

	makeLuaSprite('obj1','BackgroundBP/bombu/pcworld',-700,-230)
	addLuaSprite('obj1',false)
	setScrollFactor('obj1', 0.1, 0.1)

	addGlitchEffect('obj1',2,5,0.1)
end