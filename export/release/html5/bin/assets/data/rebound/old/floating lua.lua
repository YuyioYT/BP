function onUpdate(elapsed)
	if dadName == '404' then
	  if curStep >= 0 then
  
		songPos = getSongPosition()
  
		local currentBeat = (songPos/5000)*(bpm/60)
  
		doTweenY(dadTweenY, 'dad', 100-300*math.sin((currentBeat*0.2)*math.pi),0.01)
  
	  end
	end
end