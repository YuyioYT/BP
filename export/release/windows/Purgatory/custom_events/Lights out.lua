function onEvent(name)
    if name == 'Lights out' then
        cameraFlash('camGame', 'FFFFFF', 0.35);

        setSpriteShader('iconP1', 'BWShader');
        setShaderFloat('iconP1', 'lowerBound', 0.01);
        setShaderFloat('iconP1', 'upperBound', 0.12);
        setShaderBool('iconP1', 'invert', true);

        setSpriteShader('iconP2', 'BWShader');
        setShaderFloat('iconP2', 'lowerBound', 0.01);
        setShaderFloat('iconP2', 'upperBound', 0.12);
        setShaderBool('iconP2', 'invert', true);
        if dadName == 'impostor3' then
            triggerEvent('Change Character', 'dad', 'whitegreen');
        else
            setSpriteShader('dad', 'BWShader');
            setShaderFloat('dad', 'lowerBound', 0.01);
            setShaderFloat('dad', 'upperBound', 0.12);
            setShaderBool('dad', 'invert', true);
            setTextColor('scoreTxt', '000000');--This is for an impostor HUD
            setTextColor('botplayTxt', '000000');--This is also for an impostor HUD
        end
        if boyfriendName == 'bf' then
            triggerEvent('Change Character', 'bf', 'whitebf');
        else
            setSpriteShader('boyfriend', 'BWShader');
            setShaderFloat('boyfriend', 'lowerBound', 0.01);
            setShaderFloat('boyfriend', 'upperBound', 0.12);
            setShaderBool('boyfriend', 'invert', true);
        end
        setProperty('loBlack.alpha', 1);
        setProperty('gf.visible', false);
        setHealthBarColors('000000', 'FFFFFF');
    end
end