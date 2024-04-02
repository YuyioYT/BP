
function onUpdate(elapsed)

  if curStep >= 0 then

    songPos = getSongPosition()

    local currentBeat = (songPos/1000)*(bpm/140)

    doTweenY(dadTweenY, 'dad', -100-100*math.sin((currentBeat*0.25)*math.pi),0.001)

  end

end

function onCreatePost()
    initLuaShader("wavy")
 
    setSpriteShader("background", "wavy")
end
 
function onUpdate()
    setShaderFloat("background", "uTime", getSongPosition()/1000)
    setShaderFloat("background", "uWaveAmplitude", 0.01)
    setShaderFloat("background", "uSpeed", 2)
    setShaderFloat("background", "uFrequency", 5)
end
