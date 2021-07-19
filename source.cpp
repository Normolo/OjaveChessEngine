const[int(directory)] = parent.X

new[gui_feature(background)(template=standard.background)]
new[gui_feature(button)(
    text='Scan', item_var=scanButton)]

if gui_feature(scanButton{active}) = true:
    gui_feature(scanButton(text='Scanning'))
    function[comp(screenObject)(parent.manifestFiles.pieces_recognition.json)]{
        func_name=SCObjC
    }
    if function[SCObjC] = func.comp..true:
        function[delete(parent.manifestFiles.piece_log.json.ln{8-11})]
        function[new(field(parent.manifestFiles.piece_log.json.ln))]{
            func_name=new_field
        }
        function[import(raw.api(parent.stockfish_ai.AUTHORS))]
        saveData={
            func.comp.location = parent.manifest.peace_location.json.new_field.description
            func.comp.title = parent.manifest.peace_location.json.new_field.title
        }
        duplicate[screenObject(crn.tpr)]
        function[new(grid)]{
                func_name = grid
                grid_preset = stockfish.api.grid.correct_manouver
                const[function[grid]]
            }
        }
        function[draw(shape.Preset(arrow))]{
            shape.name = pointer
            shape.location = const[function[grid]]
            shape.color = #ff5050
        }
        
