open Antd;

let str = React.string;

[@react.component]
let make = () =>
  <Section name="Alert">
    <Alert
      className=Theme.stdWidth
      message={"Success Text" |> str}
      _type=`success
    />
    <Alert className=Theme.stdWidth message={"Info Text" |> str} _type=`info />
    <Alert
      className=Theme.stdWidth
      message={"Warning Text" |> str}
      _type=`warning
    />
    <Alert
      className=Theme.stdWidth
      message={"Error Text" |> str}
      _type=`error
    />
    <Alert
      className=Theme.stdWidth
      message={"Closable" |> str}
      _type=`error
      closable=true
    />
    <Alert
      className=Theme.stdWidth
      message={"Success Text" |> str}
      _type=`success
      description={"Description Hey Description Hey" |> str}
    />
    <Alert
      className=Theme.stdWidth
      message={"Success Text" |> str}
      _type=`success
      showIcon=true
    />
    <Alert
      className=Theme.stdWidth
      message={"Success Text" |> str}
      _type=`success
      banner=true
    />
  </Section>;