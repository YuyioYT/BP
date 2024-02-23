function onEvent(name,value1)
  if name == 'Toggle Eyesores' and value1 == '1' then
    	addEyesoresEffect('camgame', 1, 1,2,1,1,true)
  end
  if name == 'Toggle Eyesores' and value1 == '0' then
    	removeEffect('camgame','EyesoresEffect')
  end

end
