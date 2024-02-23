
function onCreatePost()
    doChromaticPulse("game", 0.02, 0.1, "sineIn")
    doChromaticPulse("hud", 0.02, 0.1, "sineIn")
    addChromaticAbberationEffect("dad",0.0009);
    addChromaticAbberationEffect("hud");
    addGrainEffect("hud",1,1,1,true)
    setAntialiasing('iconP2',false)
    --addBloomEffect2('obj1')
    --addBloomEffect2('camhud',0.1,0.1)
end

function opponentNoteHit()
    shake = 0.01
   doChromaticPulse("game", 0.02, 0.1, "sineIn")
   doChromaticPulse("hud", 0.02, 0.1, "sineIn")
    triggerEvent('Screen Shake', '0.03, 0.01', '0.03, 0.005');
    if mustHitSection == false then
        health = getProperty('health')
        if getProperty('health') > 0.5 then
            setProperty('health', health- 0.015)
        end
    end
end