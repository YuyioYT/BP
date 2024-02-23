function onCreate()
	for i = 0, getProperty('unspawnNotes.length')- 1 do
		if getPropertyFromGroup('unspawnNotes', i, 'noteType') == 'Restard' then
			setPropertyFromGroup('unspawnNotes', i, 'texture', 'SHUTDOWNNOTE_assets');
			setPropertyFromGroup('unspawnNotes', i, 'missHealth', 0.6);
		end
	end
end

function goodNoteHit(id, noteData, noteType, isSustainNote)
	if noteType == 'Restard' then
	end
end

function noteMiss(id, noteData, noteType, isSustainNote)

	if noteType == 'Restard' then
		makeLuaSprite('testBlackSquare','testBlackSquare',0,0)
		makeGraphic('testBlackSquare', 10000, 1000, '000000')
    		setObjectCamera('testBlackSquare', 'other')
    		setProperty('testBlackSquare.alpha', 1)
   		setProperty('testBlackSquare.x', 0)
    		setProperty('testBlackSquare.y', 0)
    		addLuaSprite('testBlackSquare', true)

    		setProperty('testBlackSquare.alpha', 1)

		doTweenAlpha('testBlackSquare','testBlackSquare', 0, 1, 'linear')
	end
end

