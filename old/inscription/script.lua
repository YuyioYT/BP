

function onCreatePost() --script made by impostor, credit me now or i will do an unfunny
    makeLuaText("message", "Song by idk", 500, 30, 50)
    setTextAlignment("message", "left")
    addLuaText("message")

    makeLuaText("engineText", "Inscription - Bambox Engine (PE 0.5.2)", 500, 30, 30)
    setTextAlignment("engineText", "left")
    addLuaText("engineText")

    if getPropertyFromClass('ClientPrefs', 'downScroll') == false then
        setProperty('message.y', 680)
        setProperty('engineText.y', 660)
    end
end