function onEvent(name,value1)
  if name == 'Toggle Blocked Glitch' and value1 == '1' then
    	addBlockedEffect('camhud', 1, 1, false)
  end
  if name == 'Toggle Blocked Glitch' and value1 == '0' then
   	removeEffect('camhud','BlockedGlitchEffect')
  end

end
