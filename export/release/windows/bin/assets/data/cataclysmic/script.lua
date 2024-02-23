local angleshit = 1.5;
local anglevar2 = 1.5;
local anglevar = 6
local funnyvar = 0
local shake = 0
function onCreatePost()
    --addChromaticAbberationEffect("game",0);
   -- addChromaticAbberationEffect("hud",0);
end

function opponentNoteHit()
   -- doChromaticPulse("game",0, 0.01, 0.1, "expoIn")
   -- doChromaticPulse("hud",0, 0.01, 0.1, "expoIn")
    doChromaticPulse("game",1, 0.01, 0.1, "expoIn")
    doChromaticPulse("hud",1, 0.01, 0.1, "expoIn")
    if mustHitSection == false then
        health = getProperty('health')
        if getProperty('health') > 0.5 then
            setProperty('health', health- 0.015)
        end
        characterPlayAnim('boyfriend', 'scared', true)
    end
end


function goodNoteHit()
    hp = getProperty('health')
    setProperty('health',hp+0.018)
end


function noteMiss()
    hp = getProperty('health')
    setProperty('health',hp-0.15)
end
