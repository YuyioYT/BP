--Script Create By yuyio pls Credit me


function onCreatePost()
if dadName == 'bambi-god2d' then
		makeAnimatedLuaSprite('animatedicon', 'icons/bambigod2d-animated' , getProperty('iconP2.x'), getProperty('iconP2.y'))
		addAnimationByPrefix('animatedicon', 'Neutral', 'Neutral',12, true)
		addAnimationByPrefix('animatedicon', 'Defeat', 'Defeat', 12, true)
		addAnimationByPrefix('animatedicon', 'Winning', 'Winning', 12, true)
		setScrollFactor('animatedicon', 0, 0)
		setObjectCamera('animatedicon', 'hud')
		addLuaSprite('animatedicon', false)
        setObjectOrder('animatedicon', getObjectOrder('healthBar')+3)
		objectPlayAnimation('animatedicon', 'normal', false)
		end
	end

function onUpdate(elapsed)
if dadName == 'bambi-god2d' then
                setProperty('iconP2.alpha', 0)
		if getProperty('health') > 1.6 then

        objectPlayAnimation('animatedicon', 'Defeat', false)

		setProperty('animatedicon.y', getProperty('iconP2.y') - 150)
		setProperty('animatedicon.x', getProperty('iconP2.x')-150)

		elseif getProperty('health') < 0.4 then

			objectPlayAnimation('animatedicon', 'Winning', false)
			setProperty('animatedicon.y', getProperty('iconP2.y') - 200)
			setProperty('animatedicon.x', getProperty('iconP2.x')-200)

		else

			objectPlayAnimation('animatedicon', 'Neutral', false)
			setProperty('animatedicon.y', getProperty('iconP2.y') - 200)
			setProperty('animatedicon.x', getProperty('iconP2.x')-200)

		end
	end


	setProperty('animatedicon.angle', getProperty('iconP2.angle'))
	setProperty('animatedicon.alpha', getProperty('iconP1.alpha'))
	setProperty('animatedicon.scale.x', getProperty('iconP2.scale.x')-0.52)
	setProperty('animatedicon.scale.y', getProperty('iconP2.scale.y')-0.52)
end