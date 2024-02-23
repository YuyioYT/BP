easeIn = 'expoInOut'
easeOut = 'expoOut'
duration = 1
tweening = false

function onCreate()

	makeLuaSprite('obj2', 'BackgroundBP/purgatory/grid', -1000, -300)
	setObjectOrder('obj2', 0)
        setScrollFactor('obj2', 0.2, 0.2)
	addLuaSprite('obj2', true)

	makeLuaSprite('obj1', 'BackgroundBP/purgatory/nightoveralt', -700,-500)
	setObjectOrder('obj1', 1)
	scaleObject('obj1',10,10)
        setScrollFactor('obj1', 0.2, 0.2)
	addLuaSprite('obj1', true)

	makeLuaSprite('obj3', 'BackgroundBP/purgatory/scaryclouds', -600, -200)
	setObjectOrder('obj3', 2)
        setScrollFactor('obj3', 0.7, 0.7)
        scaleObject('obj3', 1.5, 1.5)
	setObjectCamera('obj3','Hud')
	addLuaSprite('obj3', true)

	makeLuaSprite('obj4', 'BackgroundBP/purgatory/3d_Objects',  -600, -200)
	setObjectOrder('obj4', 3)
        setScrollFactor('obj4', 0.5, 0.5)
	addLuaSprite('obj4', true)
	
	makeLuaSprite('obj5', 'BackgroundBP/purgatory/3dBG_Objects',  -600, -200)
	setObjectOrder('obj5', 4)
        setScrollFactor('obj5', 0.7, 0.7)
	addLuaSprite('obj5', true)
	
	setProperty('obj2.color', getColorFromHex('4C4C4C'))
	addGlitchEffect('obj2',2,5,0.1)
	
	addChromaticAbberationEffect('other',0.002)
end

function onUpdate(elapsed)
	  if curStep >= 0 then
  
		songPos = getSongPosition()
  
		local currentBeat = (songPos/5000)*(bpm/60)
  
		doTweenY('obj5', 'obj5', -200 -200*math.sin((currentBeat*0.2)*math.pi),0.01)
		doTweenY('obj4', 'obj4', -200 -200*math.sin((currentBeat*0.2)*math.pi),1)
	end
end

function onCreatePost()
        setProperty('obj2.alpha', 0.4)
end