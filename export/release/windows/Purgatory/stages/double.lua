function onCreate()
	makeLuaSprite('obj1','BackgroundBP/poipman/UWU',-700,-330)
	addLuaSprite('obj1',false)
	setObjectOrder('obj2', 1)
	setScrollFactor('obj1', 0.2, 0.2)


	makeLuaSprite('obj2','BackgroundBP/poipman/POPI_AND_CRUSTI_OMGGGGG',-700,-330)
	addLuaSprite('obj2',false)
	setObjectOrder('obj2', 0)
	setScrollFactor('obj2', 0.1, 0.1)
	addGlitchEffect('obj2',0.1,2,0.1)
end



