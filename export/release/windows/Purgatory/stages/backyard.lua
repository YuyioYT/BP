function onCreate()
	
	makeLuaSprite('DayBG','BackgroundBP/dave/sky',-600,-400)
	addLuaSprite('DayBG',false)
	setScrollFactor('DayBG', 0.6, 0.6)
	
	makeLuaSprite('Hills','BackgroundBP/dave/hills', -1330,-432)
	addLuaSprite('Hills',false)
	setScrollFactor('Hills', 0.75, 0.75)

	makeLuaSprite('grass','BackgroundBP/dave/supergrass', -800, 150)
	addLuaSprite('grass',false)
	setScrollFactor('grass', 1, 1)
	setProperty('grass.scale.x', 0.8);

	makeLuaSprite('Gate','BackgroundBP/dave/gates', 564,-33)
	addLuaSprite('Gate',false)
	setScrollFactor('Gate', 1, 1)

	makeLuaSprite('House','BackgroundBP/dave/House', -1025, -323)
	addLuaSprite('House',false)
	setScrollFactor('House', 0.95, 0.95)

	makeLuaSprite('Grill','BackgroundBP/dave/grill', -489, 452)
	addLuaSprite('Grill',false)
	setScrollFactor('Grill',0.95,0.95)

end