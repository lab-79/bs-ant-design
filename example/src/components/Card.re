open! Antd;

let str = React.string;

module Styles = {
  open Css;

  let noBorder =
    style([background(`rgb((200, 200, 200))), padding(`px(5))]);
  let gridStyle = style([width(`percent(25.)), textAlign(`center)]);
};

[@react.component]
let make = () => {
  let (loading, setLoading) = React.useState(() => true);
  <Section name="Card">
    <div>
      <Card
        title={"Default size card" |> str}
        extra={<a href="#"> {"More" |> str} </a>}
        className=Theme.stdWidth>
        <p> {"Card content" |> str} </p>
        <p> {"Card content" |> str} </p>
        <p> {"Card content" |> str} </p>
      </Card>
      <Card
        size=`small
        title={"Small size card" |> str}
        extra={<a href="#"> {"More" |> str} </a>}
        className=Theme.stdWidth>
        <p> {"Card content" |> str} </p>
        <p> {"Card content" |> str} </p>
        <p> {"Card content" |> str} </p>
      </Card>
    </div>
    <div className=Styles.noBorder>
      <Card
        title={"Card title" |> str} bordered=false className=Theme.stdWidth>
        <p> {"Card content" |> str} </p>
        <p> {"Card content" |> str} </p>
        <p> {"Card content" |> str} </p>
      </Card>
    </div>
    <div>
      <Card
        hoverable=true
        className=Theme.stdWidth
        cover={
          <img
            alt="example"
            src="https://os.alipayobjects.com/rmsportal/QBnOOoLaAfKPirc.png"
          />
        }>
        <Card.Meta
          title={"Europe Street beat" |> str}
          description={"www.instagram.com" |> str}
        />
      </Card>
    </div>
    <div>
      <Switch
        checked={!loading}
        onChange={_ => setLoading(loading => !loading)}
      />
      <Card className=Theme.stdWidth loading>
        <Card.Meta
          avatar={
            <Avatar
              src="https://zos.alipayobjects.com/rmsportal/ODTLcjxAfvqbxHnVXCYX.png"
            />
          }
          title={"Card title" |> str}
          description={"This is the description" |> str}
        />
      </Card>
      <Card
        className=Theme.stdWidth
        actions=[|
          <IconUnsafe _type=IconName.setting />,
          <IconUnsafe _type=IconName.edit />,
          <IconUnsafe _type=IconName.ellipsis />,
        |]>
        <Skeleton loading avatar=true active=true>
          <Card.Meta
            avatar={
              <Avatar
                src="https://zos.alipayobjects.com/rmsportal/ODTLcjxAfvqbxHnVXCYX.png"
              />
            }
            title={"Card title" |> str}
            description={"This is the description" |> str}
          />
        </Skeleton>
      </Card>
    </div>
    <Card title={"Card Title" |> str}>
      <Card.Grid className=Styles.gridStyle> {"Content" |> str} </Card.Grid>
      <Card.Grid className=Styles.gridStyle> {"Content" |> str} </Card.Grid>
      <Card.Grid className=Styles.gridStyle> {"Content" |> str} </Card.Grid>
      <Card.Grid className=Styles.gridStyle> {"Content" |> str} </Card.Grid>
      <Card.Grid className=Styles.gridStyle> {"Content" |> str} </Card.Grid>
      <Card.Grid className=Styles.gridStyle> {"Content" |> str} </Card.Grid>
      <Card.Grid className=Styles.gridStyle> {"Content" |> str} </Card.Grid>
    </Card>
  </Section>;
};