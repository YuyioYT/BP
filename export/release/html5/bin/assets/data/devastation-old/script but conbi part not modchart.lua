function onUpdate(elapsed)
songPos = getSongPosition()
local currentBeat = (songPos/1000)
doTweenX('opponentmove', 'gf', -300 - 3300*math.sin((currentBeat+12*12)*math.pi), 2)
end