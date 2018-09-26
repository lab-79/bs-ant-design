/* from bs-ant */

[@bs.module] external icon: ReasonReact.reactClass = "antd/lib/icon";
let make = (~type_=?, ~spin=?, ~onClick=?, ~id=?, ~className=?, ~style=?) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=icon,
    ~props=
      Js.Undefined.{
        "type": fromOption(type_),
        "spin": fromOption(spin),
        "onClick": fromOption(onClick),
        "id": fromOption(id),
        "className": fromOption(className),
        "style": fromOption(style),
      },
  );
