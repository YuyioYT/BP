function onUpdate(elapsed)
	if dadName == 'bambi-god2d' then
	  if curStep >= 0 then
  
		songPos = getSongPosition()
  
		local currentBeat = (songPos/5000)*(bpm/60)
  
		doTweenY(dadTweenY, 'dad', 1500-200*math.sin((currentBeat*0.2)*math.pi),0.001)
  
	  end
	end
end