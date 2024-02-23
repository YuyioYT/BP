function onCreatePost()
	makeLuaSprite('overlay','BackgroundBP/farmnight/rbglow',-1400,500)
	addLuaSprite('overlay',true)
    	setScrollFactor('overlay', 1, 1)
    	setObjectOrder('overlay',10)
	setObjectOrder('dad',11)
    	scaleObject('overlay',1.5,1.5)
	setBlendMode('overlay','add')
end
function onUpdate(elapsed)
	  if curStep >= 0 then
  
		songPos = getSongPosition()
  
		local currentBeat = (songPos/5000)*(bpm/60)
  
		doTweenY('overlay', 'overlay', 700-300*math.sin((currentBeat*0.2)*math.pi),0.01)
  
	  end
end

