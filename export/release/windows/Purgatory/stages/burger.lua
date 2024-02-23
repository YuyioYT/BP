function onCreate()

	makeLuaSprite('obj1','BackgroundBP/bamburg/hamburger',-700,-230)
	addLuaSprite('obj1',false)
	setScrollFactor('obj1', 0.1, 0.1)
        setAntialiasing('obj1',false)
	addGlitchEffect('obj1',2,5,0.1)
end

