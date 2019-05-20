open! Antd;

let str = React.string;

[@react.component]
let make = () =>
  <Section name="Empty">
    <Empty />
    <Empty
      image={
        <img
          src="https://gw.alipayobjects.com/mdn/miniapp_social/afts/img/A*pevERLJC9v0AAAAAAAAAAABjAQAAAQ/original"
        />
      }
      imageStyle={ReactDOMRe.Style.make(~height="60px", ())}
      description={
        <span>
          {"Customize " |> str}
          <a href="#API"> {"Description" |> str} </a>
        </span>
      }>
      <Button _type=`primary> {"Create Now" |> str} </Button>
    </Empty>
  </Section>;