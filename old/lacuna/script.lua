

function onCreatePost() --script made by impostor, credit me now or i will do an unfunny
    makeLuaText("message", "Song by null_y34r", 500, 30, 50)
    setTextAlignment("message", "left")
    addLuaText("message")

    makeLuaText("engineText", "L A C U N A - DATA_EXPUNGED Engine (PE 0.5.2)", 500, 30, 30)
    setTextAlignment("engineText", "left")
    addLuaText("engineText")

    if getPropertyFromClass('ClientPrefs', 'downScroll') == false then
        setProperty('message.y', 680)
        setProperty('engineText.y', 660)
    end
end