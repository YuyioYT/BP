function onEvent(name, value1, value2)
	if name == '_Dramatic_ Black and White effect' and value1 == '1' then
        	cameraFlash('camGame', 'FFFFFF', 0.35);

		makeLuaSprite('whitebg', '', -500, -300)
		makeGraphic('whitebg',5000,5000,'ffffff')
		addLuaSprite('whitebg', false)

       	 	setSpriteShader('iconP1', 'BWShader');
        	setShaderFloat('iconP1', 'lowerBound', 0.01);
        	setShaderFloat('iconP1', 'upperBound', 0.12);
        	setShaderBool('iconP1', 'invert', true);

        	setSpriteShader('iconP2', 'BWShader');
        	setShaderFloat('iconP2', 'lowerBound', 0.01);
        	setShaderFloat('iconP2', 'upperBound', 0.12);
        	setShaderBool('iconP2', 'invert', true);

            	setSpriteShader('dad', 'BWShader');
            	setShaderFloat('dad', 'lowerBound', 0.01);
           	setShaderFloat('dad', 'upperBound', 0.12);
           	setShaderBool('dad', 'invert', true);

            	setTextColor('scoreTxt', '000000');--This is for an impostor HUD
            	setTextColor('botplayTxt', '000000');--This is also for an impostor HUD

           	 setSpriteShader('boyfriend', 'BWShader');
            	setShaderFloat('boyfriend', 'lowerBound', 0.01);
            	setShaderFloat('boyfriend', 'upperBound', 0.12);
            	setShaderBool('boyfriend', 'invert', true);

           	 setSpriteShader('gf', 'BWShader');
            	setShaderFloat('gf', 'lowerBound', 0.01);
            	setShaderFloat('gf', 'upperBound', 0.12);
            	setShaderBool('gf', 'invert', true);

        	setProperty('loBlack.alpha', 1);
        	--setProperty('gf.visible', false);
        	setHealthBarColors('000000', 'FFFFFF');
end

	if name == '_Dramatic_ Black and White effect' and value1 == '0' then
		removeLuaSprite('whitebg')
           	removeSpriteShader('dad');
            	removeSpriteShader('boyfriend');
            	removeSpriteShader('gf');
       		removeSpriteShader('iconP2');
        	removeSpriteShader('iconP1');
	end
end