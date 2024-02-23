function onEvent(name)
    if name == 'Lights on' then
        cameraFlash('camGame', '000000', 0.35);

        removeSpriteShader('iconP2');
        removeSpriteShader('iconP1');

        if dadName == 'whitegreen' then
            triggerEvent('Change Character', 'dad', 'impostor3');
        else
            removeSpriteShader('dad');
            setTextColor('scoreTxt', getHealthColor('dad'));--This is for an impostor HUD
            setTextColor('botplayTxt', getHealthColor('dad'));--This is also for an impostor HUD
        end
        if boyfriendName == 'whitebf' then
            triggerEvent('Change Character', 'bf', 'bf');
        else
            removeSpriteShader('boyfriend');
        end
        setHealthBarColors(getHealthColor('dad'), getHealthColor('boyfriend'));
        setProperty('loBlack.alpha', 0);
        setProperty('gf.visible', true);
    end
end
function getHealthColor(char)
    return string.format('%02x%02x%02x', getProperty(char..'.healthColorArray[0]'), getProperty(char..'.healthColorArray[1]'), getProperty(char..'.healthColorArray[2]'))
end