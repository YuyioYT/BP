duration = 1
stayTime = 4
ease = 'backIn'
textfont = 'Comic Sans MS Bold.ttf'

--color = '000000'

--Script Create by yuyio

function onCreate()
    makeLuaText('songNameTxt', songName, 0 , -700,200)
    setTextFont('songNameTxt', textfont)
    setTextSize('songNameTxt', 30)
    addLuaText('songNameTxt')

    setObjectCamera('songCardSprite', 'other')
    setObjectCamera('songNameTxt', 'other')
    setObjectCamera('composerNameTxt', 'other')

	setProperty('healthBar.visible', true)

    makeLuaSprite('box', 'box',0,0)
    makeGraphic("box",getProperty('songNameTxt.width') + 200, 60)
    setObjectCamera('box', 'other')
    setProperty('box.alpha', 0.8)
    setProperty('box.x',  -800)
    setProperty('box.y', 200)
    addLuaSprite('box', true)

    setObjectOrder('songNameTxt',2)
    setObjectOrder('box',1)

    runTimer('cardTimer', stayTime, 1)
end

function onUpdate()
    setProperty('box.color', getIconColor('dad'))
end

function onSongStart()
	
    doTweenX('songNameTxt','songNameTxt',40,duration,'backOut')
    doTweenX("box", "box", 0,duration, 'backOut')
end

function onTimerCompleted(tag, loops, loopsLeft)
    if tag == 'cardTimer' then
        songCardLeave()
    end
end

function songCardLeave()
    doTweenX('cardTween', 'songCardSprite', -1000, duration, ease)
    doTweenX('cardTween2', 'songNameTxt', -1000, duration, ease)
    doTweenX('box', 'box', -1000, duration, ease)
    doTweenX('cardTween3', 'composerNameTxt', -1000, duration, ease)
end

function getIconColor(chr)
	local chr = chr or "dad"
	return getColorFromHex(rgbToHex(getProperty(chr .. ".healthColorArray")))
	end
	
	function rgbToHex(array)
	return string.format('%.2x%.2x%.2x', array[1], array[2], array[3])
end
