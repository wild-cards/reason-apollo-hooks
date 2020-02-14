module Mutation = ApolloHooksMutation;
module Query = ApolloHooksQuery;
module Provider = ApolloHooksProvider;
module Subscription = ApolloHooksSubscription;

let useQuery = Query.useQuery;
let useMutation = Mutation.useMutation;
let useSubscription = Subscription.useSubscription;

let toQueryObj = (result): ApolloClient.queryObj => result;

let toReadQueryOptions = result => result;
