songended = false
function onUpdatePost()

    if songended == false then

        setWindowTitle('Bambi Purgatory | '..'Song: '..getProperty('curSong')..' | '..getProperty('scoreTxt.text'))

    end

end

function onDestroy()

    songended = true

    setWindowTitle('Bambi Purgatory')

    changePresence('Bambi Purgatory')

end

function onGameOver()

    songended = true

    setWindowTitle('IMMA DIED ajajajaj :( |'..' Song: '..getProperty('curSong')..' | Game Over')

    return Function_Continue

end