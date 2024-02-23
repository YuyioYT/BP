local shityourself = true
Chromacrap = 0;

function boundTo(value, min, max)
    return math.max(min, math.min(max, value))
end
function math.lerp(from,to,i)return from+(to-from)*i end

function setChrome(chromeOffset)
    setShaderFloat("shader_chromatic_aberration", "rOffset", chromeOffset);
    setShaderFloat("shader_chromatic_aberration", "gOffset", 0.0);
    setShaderFloat("shader_chromatic_aberration", "bOffset", chromeOffset * -1);
end

function opponentNoteHit(id, noteData, noteType, isSustainNote)
    if shityourself then
        Chromacrap = Chromacrap + 0.015 -- edit this
    end
end

function onCreatePost()

    initLuaShader("chromatic_aberration")

    makeLuaSprite("shader_chromatic_aberration")

    makeGraphic("shader_chromatic_aberration", screenWidth, screenHeight)

    setSpriteShader("shader_chromatic_aberration", "chromatic_aberration")
    
    addHaxeLibrary("ShaderFilter", "openfl.filters")

    runHaxeCode([[
        trace(ShaderFilter);
        game.camGame.setFilters([new ShaderFilter(game.getLuaObject("shader_chromatic_aberration").shader)]);
        game.camHUD.setFilters([new ShaderFilter(game.getLuaObject("shader_chromatic_aberration").shader)]);
    ]])
end

function onUpdate(elapsed)
    Chromacrap = math.lerp(Chromacrap, 0, boundTo(elapsed * 20, 0, 1))
    setChrome(Chromacrap)

    if not shityourself then 
        if curBeat % 1 == 0 then
            Chromacrap = 0.005 -- edit this
        end
    end

    if curStep == 1024 then shityourself = false end
    if curStep == 1536 then shityourself = true end
    if curStep == 2048 then shityourself = false end
    if curStep == 2815 then shityourself = true end
end